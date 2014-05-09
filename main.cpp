#include <stack>
#include <fstream>
#include <string.h>
#include <iostream>
#include <unordered_map>
#include "TransitionTable.h"
#include "Lexical_Analyzer.h"
#include "graph_package/Node.h"
#include "graph_package/Graph.h"
#include "test_package/DFATest.h"
#include "lexical_analyzer_package/DFA_State.h"
#include "test_package/TestSimpsonGraphBuilder.h"
#include "lexical_analyzer_package/TokenManager.h"
#include "lexical_analyzer_package/DFA_Genrator.h"
#include "lexical_analyzer_package/NFA_Generator.h"
#include "lexical_analyzer_package/DFA_Minimization.h"
#include "lexical_analyzer_package/ExpressionEvaluator.h"

using namespace std;

int main(int arg , char* args[])
{
    /**************************** Main Code******************************/
    Lexical_Analyzer lx(args[1]);

    /**************************** END OF MAIN ***************************/


    /***************************** TEST *********************************/

        /****************** Simposn't Test  **********************
                            Houssainy */

    /** Test Graph Builder **/
    TestSimpsonGraphBuilder test_builder;
    test_builder.start();

        /******************* END OF Houssainy TEST  *************/


        /****************** TEST PostFiXConversion  *************
                            YASMINA */

    ExpressionEvaluator expressionEvaluator;
    string exp;

    exp=expressionEvaluator.post_fix_conversion("A.B|C*");
    cout <<"PostFixNotation of this Expression (A.B|C*) is "<< exp << endl;
    cout << "--------------------------------------------------------" << endl;

    exp=expressionEvaluator.post_fix_conversion("A.(B|C*|A*).B*");
    cout <<"PostFixNotation of this Expression (A.(B|C*|A*).B*) is "<< exp << endl;
    cout << "--------------------------------------------------------" << endl;

    exp=expressionEvaluator.post_fix_conversion("A.(B|C)");
    cout <<"PostFixNotation of this Expression (A.(B|C) is "<< exp <<  endl;
    cout << "--------------------------------------------------------" << endl;

    exp=expressionEvaluator.post_fix_conversion("A.(B|C)|A|C*.(A*.S*)");
    cout <<"PostFixNotation of this Expression (A.(B|C)|A|C*.(A*.S*)) is "<< exp << endl;
    cout << "-------------------------------------------------------" << endl;

        /******************* END OF YASMINA TEST  ***************/

        /******************* DFA TEST  **************************
                            AHMED */
<<<<<<< HEAD
    /**
     * DFA test
     */
    /**
     *-------------------------------------------
     *Test 1
     *-------------------------------------------
     */
    vector <vector <int> > nfa;
    vector <vector <int> > eclosure;
    vector <bool> finalStates ;
// inout to NFA table
    vector <int> row;
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(2);
    row.push_back(1);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(4);
    row.push_back(2);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(6);
    row.push_back(1);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(8);
    row.push_back(3);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(10);
    row.push_back(4);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    cout << nfa.size()<<endl;
//input to e-closure
    row.push_back(1);
    row.push_back(5);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(3);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(11);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(7);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(9);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(11);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    cout<< eclosure.size()<<endl;
//create final states vector
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(true);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(true);
    finalStates.push_back(false);
    cout<< finalStates.size() <<endl;
//this vector for test only
    vector < string > input;
    input.push_back("i");
    input.push_back("f");
    input.push_back("n");
    input.push_back("t");

    DFA_Genrator gene = DFA_Genrator (nfa , eclosure , input ,finalStates);
    vector < vector <DFA_State> > DFA = gene.Get_DFA();
    vector < DFA_State > new_states = gene.Get_New_States();
    for (int i=0 ; i<DFA.size() ; i++)
        for (int j=0; j<DFA[i].size() ; j++)
            cout << DFA[i][j].get_state_number ()<<"\t" <<DFA[i][j].is_final () << endl;

    DFA_Minimization mini = DFA_Minimization ();
    vector < vector <int> > MDFA = mini.minimize(DFA,new_states);
    vector < bool > finals =mini.Is_final();
    cout <<"\n\n\n"<<"Minimization"<<endl;
    for (int i=0 ; i<MDFA.size() ; i++)
        for (int j=0; j<MDFA[i].size() ; j++)
            if (MDFA[i][j]!=-1)
                cout << MDFA[i][j]<<"\t\t\t"<<finals[MDFA[i][j]]<< endl;
            else
                cout << MDFA[i][j]<< endl;

    cout << "\n\n\n" <<"test 2" <<endl;
    /**
     *-------------------------------------------
     *Test 2
     *-------------------------------------------
     */
    nfa.clear();
    finalStates.clear();
    eclosure.clear();
// inout to NFA table
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(2);
    row.push_back(1);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(4);
    row.push_back(2);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(6);
    row.push_back(1);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(8);
    row.push_back(2);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(10);
    row.push_back(3);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(12);
    row.push_back(4);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(14);
    row.push_back(5);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(16);
    row.push_back(6);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();
    row.push_back(-1);
    row.push_back(-1);
    nfa.push_back(row);
    row.clear();

    cout << nfa.size()<<endl;
//input to e-closure
    row.push_back(1);
    row.push_back(5);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(3);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(17);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(7);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(9);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(11);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(13);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(15);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    row.push_back(17);
    eclosure.push_back(row);
    row.clear();
    eclosure.push_back(row);
    row.clear();
    cout<< eclosure.size()<<endl;

//create final states vector
    finalStates.clear();
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(true);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(false);
    finalStates.push_back(true);
    finalStates.push_back(false);
    cout<< finalStates.size() <<endl;
//this vector for test only
    input.clear();
    input.push_back("d");
    input.push_back("o");
    input.push_back("u");
    input.push_back("b");
    input.push_back("l");
    input.push_back("e");


    gene = DFA_Genrator (nfa , eclosure , input ,finalStates);
    DFA = gene.Get_DFA();
    new_states = gene.Get_New_States();
    for (int i=0 ; i<DFA.size() ; i++)
    {
        for (int j=0; j<DFA[i].size() ; j++)
        {
            cout << DFA[i][j].get_state_number ()<<"\t" <<DFA[i][j].is_final () << endl;
        }
    }

    mini = DFA_Minimization ();
    MDFA = mini.minimize(DFA,new_states);
    finals.clear();
    finals =mini.Is_final();
    cout <<"\n\n\n"<<"Minimization"<<endl;
    for (int i=0 ; i<MDFA.size() ; i++)
        for (int j=0; j<MDFA[i].size() ; j++)
            if (MDFA[i][j]!=-1)
                cout << MDFA[i][j]<<"\t\t\t"<<finals[MDFA[i][j]]<< endl;
            else
                cout << MDFA[i][j]<< endl;

        /******************* END OF AHMED TEST  ******************/

        /****************** LEXIACL ANALYSIS OUTPUT  *************
                            BUSHRA */

    /* **************************************************/
    vector< vector<char> > symbol_table;
    ifstream inputFile ;
    ofstream outputFile;
    ofstream errorFile ;

    TestTokenManager test;
    test.start();

    /* ***** For Test ******/
    vector<string> Type;
    unordered_map <char,int> in ;
    in.insert(make_pair('d',0));
    in.insert(make_pair('o',1));
    in.insert(make_pair('u',2));
    in.insert(make_pair('b',3));
    in.insert(make_pair('l',4));
    in.insert(make_pair('e',5));
    /* ***********/
    TokenManager *token;
    TransitionTable *t =new TransitionTable(MDFA, in , finals,Type);
    token = new TokenManager(t);
    token->printTransitionTable();

    char inputChar = ' ' ;
    int returnState;
    string token_type;
    /* **************************************************/
    inputFile.open("inputFile.txt");
    if(inputFile)
    {
        outputFile.open("outputFile.txt");
        if(!outputFile)
            cout<< "Unable to open output file";
        errorFile.open("errorFile.txt");
        if(!errorFile)
            cout<< "Unable to open error file";
         while (! inputFile.eof())
        {
            inputFile >> noskipws >> inputChar;
            if(inputFile.eof())
            {
                token->transTableIndex = 0;
                returnState = token->GetNextState('\0');
            }
            else
            {
                cout << inputChar<<endl;
//                if (inputChar == 'a') token->transTableIndex = 1;
//                else if (inputChar == 'b') token->transTableIndex = 2;
//                else token->transTableIndex = -1;
                returnState = token->GetNextState(inputChar);
            }

            if(token->is_Token)
            {
                token_type = t->type(token->states[token->states.size()]);
                token_type = "Identifier";
                cout << "************************* Symbol Table**********************" << endl;
                if(token_type == "Identifier")
                {
                    outputFile << /*token_type*/ "id" << endl;
                    symbol_table.push_back(token->seq);
                    for(int i = 0; i < symbol_table.size(); ++i)
                    {
                        for(int j = 0; j < symbol_table[i].size(); ++j)
                            cout << symbol_table[i][j];

                        cout << endl;
                    }
                }
                if(token_type == "operator")
                    outputFile << "\t" << token->seq[0] << endl;

                if(token_type == "punc")
                    outputFile << "\t" << token->seq[0] << endl;

                if(token_type == "digit")
                       outputFile << "\t" << token->seq[0] << endl;

                if(token_type == "keyword")
                {
                    for (int i = 0 ; i < token->seq.size(); i++)
                    {
                        outputFile << token->seq[i] ;
                    }
                }
            }
            if(token->isError)
            {
                errorFile << token->is_Error() << endl;
                token->isError = false;
            }
        }
        inputFile.close();
        outputFile.close();
        errorFile.close();

        cout << endl << "*****************************************************" << endl;
        cout << "*********************** States path ***********************"<<endl;
        for(int i = 0; i < token->states.size(); ++i)
        {
            cout << token->states[i]<<endl;
            cout << endl;
        }

    }
    else
    {
        cout<< "Unable to open input file";
    }
        /******************* END OF BUSHRA TEST  ***********************/


=======


    DFATest DFAtest = DFATest ();


>>>>>>> c0df6ff9adc88fee05a6d8e6378ee6c8b1b1ff4d

    /***************************** END OF TEST **********************************/
    return 0;

};
