#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main(){
    
    int max {8}; //upper limit of the randomiser
    srand(time(NULL)); //proper random?
    
    vector <string> listA;
    listA.push_back("It's been great talking to you but ");
    listA.push_back("i gotta run ");
    listA.push_back("Look over there! ");
    listA.push_back("Sorry to do this but ");
    listA.push_back("Sorry to interrupt you but ");
    listA.push_back("Give your family my best because ");
    listA.push_back("I wish i could talk but ");
    listA.push_back("I just got a text: ");

    vector <string> listB;
    listB.push_back("my dog ");
    listB.push_back("my mum ");
    listB.push_back("Borris Johnson ");
    listB.push_back("my old school footie team ");
    listB.push_back("Amber Heard ");
    listB.push_back("a shop santa ");
    listB.push_back("my Harry Potter cardborad cutout ");
    listB.push_back("my imaginary girlfriend ");
    
    vector <string> listC;
    listC.push_back("isn't going to make it");
    listC.push_back("just broke into my house");
    listC.push_back("crashed my car");
    listC.push_back("just came back to life");
    listC.push_back("fell into the neighbors pool");
    listC.push_back("is pissing in my back garden");
    listC.push_back("got beaten up by the postie ");
    listC.push_back("peed on a little girls lemonade stand");

    string partA, partB, partC;
    
    partA = listA.at(rand()%max);
    partB = listB.at(rand()%max);
    partC = listC.at(rand()%max);

    cout <<partA<<partB<<partC<< endl;

    cout << endl;
    return 0;
}