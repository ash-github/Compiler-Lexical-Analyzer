#include "DFATest.h"

DFATest::DFATest()
{
//    /**
//         * DFA test
//         */
//    /**
//     *-------------------------------------------
//     *Test 1
//     *-------------------------------------------
//     */
//    vector <vector <int> > nfa;
//    vector <vector <int> > eclosure;
//    vector <bool> finalStates ;
//// inout to NFA table
//    vector <int> row;
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(2);
//    row.push_back(1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(4);
//    row.push_back(2);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(6);
//    row.push_back(1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(8);
//    row.push_back(3);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(10);
//    row.push_back(4);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    cout << nfa.size()<<endl;
////input to e-closure
//    row.push_back(1);
//    row.push_back(5);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(3);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(11);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(7);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(9);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(11);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    cout<< eclosure.size()<<endl;
////create final states vector
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(true);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(true);
//    finalStates.push_back(false);
//    cout<< finalStates.size() <<endl;
////this vector for test only
//    vector < string > input;
//    input.push_back("i");
//    input.push_back("f");
//    input.push_back("n");
//    input.push_back("t");
//
//    /**
//        constractor of DFA genrator taka nfa table and eclousre that genrate when we traverse in the NFA graph
//        * input make your map and let it for me to change it
//        * final state also will generate when we traverse in the graph
//    */
//    DFA_Genrator gene = DFA_Genrator ();
//    gene.Generate(nfa , eclosure , input.size() ,finalStates);
//    // this method get the DFA table from DFA Generator to pass it to DFA Minimization
//    vector < vector <DFA_State> > DFA = gene.Get_DFA();
//    // this method get the new DFA states from DFA Generator to pass it to DFA Minimization
//    vector < DFA_State > new_states = gene.Get_New_States();
//    // print the DFA table
//    for (int i=0 ; i<DFA.size() ; i++)
//        for (int j=0; j<DFA[i].size() ; j++)
//            cout << DFA[i][j].get_state_number ()<<"\t" <<DFA[i][j].is_final () << endl;
//    /**
//        constractor of DFA Minimization
//    */
//    DFA_Minimization mini = DFA_Minimization ();
//    /**
//        method in DFA Minimization which take generated DFA table and DFA states and return minimized DFA transation table
//    */
//    vector < vector <int> > MDFA = mini.minimize(DFA,new_states);
//    /**
//        method in DFA Minimization return acceptance table of minimized states
//    */
//    vector < bool > finals =mini.Is_final();
//    cout <<"\n\n\n"<<"Minimization"<<endl;
//    // print minimized DFA
//    for (int i=0 ; i<MDFA.size() ; i++)
//        for (int j=0; j<MDFA[i].size() ; j++)
//            if (MDFA[i][j]!=-1)
//                cout << MDFA[i][j]<<"\t\t\t"<<finals[MDFA[i][j]]<< endl;
//            else
//                cout << MDFA[i][j]<< endl;
//
//    cout << "\n\n\n" <<"test 2" <<endl;
//    /**
//     *-------------------------------------------
//     *Test 2
//     *-------------------------------------------
//     */
//    nfa.clear();
//    finalStates.clear();
//    eclosure.clear();
//// inout to NFA table
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(2);
//    row.push_back(1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(4);
//    row.push_back(2);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(6);
//    row.push_back(1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(8);
//    row.push_back(2);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(10);
//    row.push_back(3);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(12);
//    row.push_back(4);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(14);
//    row.push_back(5);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(16);
//    row.push_back(6);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//
//    cout << nfa.size()<<endl;
////input to e-closure
//    row.push_back(1);
//    row.push_back(5);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(3);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(17);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(7);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(9);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(11);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(13);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(15);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(17);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    cout<< eclosure.size()<<endl;
//
////create final states vector
//    finalStates.clear();
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(true);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(true);
//    finalStates.push_back(false);
//    cout<< finalStates.size() <<endl;
////this vector for test only
//    input.clear();
//    input.push_back("d");
//    input.push_back("o");
//    input.push_back("u");
//    input.push_back("b");
//    input.push_back("l");
//    input.push_back("e");
//
//    gene = DFA_Genrator ();
//    gene.Generate(nfa , eclosure , input.size() ,finalStates);
//    DFA = gene.Get_DFA();
//    new_states = gene.Get_New_States();
//    for (int i=0 ; i<DFA.size() ; i++)
//    {
//        for (int j=0; j<DFA[i].size() ; j++)
//        {
//            cout << DFA[i][j].get_state_number ()<<"\t" <<DFA[i][j].is_final () << endl;
//
//        }
//
//    }
//
//    mini = DFA_Minimization ();
//    MDFA = mini.minimize(DFA,new_states);
//    finals.clear();
//    finals =mini.Is_final();
//    cout <<"\n\n\n"<<"Minimization"<<endl;
//    for (int i=0 ; i<MDFA.size() ; i++)
//        for (int j=0; j<MDFA[i].size() ; j++)
//            if (MDFA[i][j]!=-1)
//                cout << MDFA[i][j]<<"\t\t\t"<<finals[MDFA[i][j]]<< endl;
//            else
//                cout << MDFA[i][j]<< endl;
//
//    /**
//     *-------------------------------------------
//     *Test 3
//     *-------------------------------------------
//     */
//    cout << "\n\n\n\n"<<"test 3"<<endl;
//
//// input to NFA table
//    nfa.clear();
//    finalStates.clear();
//    eclosure.clear();
//
//
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(3);
//    row.push_back(1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(4);
//    row.push_back(1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(7);
//    row.push_back(2);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(8);
//    row.push_back(3);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(11);
//    row.push_back(4);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    cout << nfa.size()<<endl;
////input to e-closure
//    row.push_back(1);
//    row.push_back(2);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(5);
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(6);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(9);
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(10);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(9);
//    eclosure.push_back(row);
//    row.clear();
//    cout<< eclosure.size()<<endl;
////create final states vector
//    finalStates.clear();
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(true);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(true);
//    cout<< finalStates.size() <<endl;
////this vector for test only
//    input.clear();
//    input.push_back("i");
//    input.push_back("f");
//    input.push_back("n");
//    input.push_back("t");
//
//    /**
//        constractor of DFA genrator taka nfa table and eclousre that genrate when we traverse in the NFA graph
//        * input make your map and let it for me to change it
//        * final state also will generate when we traverse in the graph
//    */
//    gene = DFA_Genrator ();
//    gene.Generate(nfa , eclosure , input.size() ,finalStates);
//    // this method get the DFA table from DFA Generator to pass it to DFA Minimization
//    DFA = gene.Get_DFA();
//    // this method get the new DFA states from DFA Generator to pass it to DFA Minimization
//    new_states = gene.Get_New_States();
//    // print the DFA table
//    for (int i=0 ; i<DFA.size() ; i++)
//        for (int j=0; j<DFA[i].size() ; j++)
//            cout << DFA[i][j].get_state_number ()<<"\t" <<DFA[i][j].is_final () << endl;
//
//    mini = DFA_Minimization ();
//    MDFA = mini.minimize(DFA,new_states);
//    finals.clear();
//    finals =mini.Is_final();
//    cout <<"\n\n\n"<<"Minimization"<<endl;
//    for (int i=0 ; i<MDFA.size() ; i++)
//        for (int j=0; j<MDFA[i].size() ; j++)
//            if (MDFA[i][j]!=-1)
//                cout << MDFA[i][j]<<"\t\t\t"<<finals[MDFA[i][j]]<< endl;
//            else
//                cout << MDFA[i][j]<< endl;
//
//    /**
//     *-------------------------------------------
//     *Test 4
//     *-------------------------------------------
//     */
//    cout << "\n\n\n\n"<<"test 4"<<endl;
//
//// input to NFA table
//    nfa.clear();
//    finalStates.clear();
//    eclosure.clear();
//
//
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(2);
//    row.push_back(1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(4);
//    row.push_back(2);
//    nfa.push_back(row);
//    row.clear();
//    row.push_back(-1);
//    row.push_back(-1);
//    nfa.push_back(row);
//    row.clear();
//
//    cout << nfa.size()<<endl;
////input to e-closure
//    row.push_back(1);
//    row.push_back(4);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(3);
//    eclosure.push_back(row);
//    row.clear();
//    eclosure.push_back(row);
//    row.clear();
//    row.push_back(1);
//    eclosure.push_back(row);
//    row.clear();
//    cout<< eclosure.size()<<endl;
////create final states vector
//    finalStates.clear();
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(false);
//    finalStates.push_back(true);
//    cout<< finalStates.size() <<endl;
////this vector for test only
//    input.clear();
//    input.push_back("i");
//    input.push_back("f");
//
//    /**
//        constractor of DFA genrator taka nfa table and eclousre that genrate when we traverse in the NFA graph
//        * input make your map and let it for me to change it
//        * final state also will generate when we traverse in the graph
//    */
//    gene = DFA_Genrator ();
//    gene.Generate(nfa , eclosure , input.size() ,finalStates);
//    // this method get the DFA table from DFA Generator to pass it to DFA Minimization
//    DFA = gene.Get_DFA();
//    // this method get the new DFA states from DFA Generator to pass it to DFA Minimization
//    new_states = gene.Get_New_States();
//    // print the DFA table
//    for (int i=0 ; i<DFA.size() ; i++)
//        for (int j=0; j<DFA[i].size() ; j++)
//            cout << DFA[i][j].get_state_number ()<<"\t" <<DFA[i][j].is_final () << endl;
//
//    mini = DFA_Minimization ();
//    MDFA = mini.minimize(DFA,new_states);
//    finals.clear();
//    finals =mini.Is_final();
//    cout <<"\n\n\n"<<"Minimization"<<endl;
//    for (int i=0 ; i<MDFA.size() ; i++)
//        for (int j=0; j<MDFA[i].size() ; j++)
//            if (MDFA[i][j]!=-1)
//                cout << MDFA[i][j]<<"\t\t\t"<<finals[MDFA[i][j]]<< endl;
//            else
//                cout << MDFA[i][j]<< endl;
}

DFATest::~DFATest()
{
    //dtor
}
