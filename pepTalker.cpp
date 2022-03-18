#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main(){
    
    int max {19}; //upper limit of the randomiser
    srand(time(NULL)); //proper random?
    
    vector <string> listA;
    listA.push_back("oi ");
    listA.push_back("Champ, ");
    listA.push_back("Fact: ");
    listA.push_back("Everybody says");
    listA.push_back("Dang... ");
    listA.push_back("Check it: ");
    listA.push_back("Just saying... ");
    listA.push_back("Superstar, ");
    listA.push_back("Tiger, ");
    listA.push_back("Self, ");
    listA.push_back("Know this: ");
    listA.push_back("News alert: ");
    listA.push_back("Girl, ");
    listA.push_back("Ace, ");
    listA.push_back("Excuse me but ");
    listA.push_back("Experts agree: ");
    listA.push_back("In my opinion, ");
    listA.push_back("Hear ye, hear ye: ");
    listA.push_back("Okay, listen up: ");
    
    vector <string> listB;
    listB.push_back("your breath today ");
    listB.push_back("the mere idea of you ");
    listB.push_back("your soul ");
    listB.push_back("your hair today ");
    listB.push_back("everything you do ");
    listB.push_back("your personal style ");
    listB.push_back("every thought you have ");
    listB.push_back("that sparkle in your eye ");
    listB.push_back("your presence here ");
    listB.push_back("what you got going on ");
    listB.push_back("the essential you ");
    listB.push_back("your life's journey ");
    listB.push_back("that saucy personality ");
    listB.push_back("your DNA ");
    listB.push_back("that brain of yours ");
    listB.push_back("your choice of attire ");
    listB.push_back("the way you roll ");
    listB.push_back("whatever your secret is ");
    listB.push_back("all of you all ");
    
    vector <string> listC;
    listC.push_back("has serious game, ");
    listC.push_back("can kill a Rhino, from 100 ft ");
    listC.push_back("rains magic, ");
    listC.push_back("deserves the Nobel prize, ");
    listC.push_back("raises the roof, ");
    listC.push_back("breeds miracles, ");
    listC.push_back("is paying off big time, ");
    listC.push_back("shows mad skills, ");
    listC.push_back("just shimmers, ");
    listC.push_back("is a national treasure, ");
    listC.push_back("gets the party going, ");
    listC.push_back("is the next big thing, ");
    listC.push_back("roars like a Lion, ");
    listC.push_back("is a rainbow factory, ");
    listC.push_back("is made of diamonds, ");
    listC.push_back("makes birds sing, ");
    listC.push_back("should be taught in school, ");
    listC.push_back("makes the world go round, ");
    listC.push_back("is 100% legit, ");
    
    vector <string> listD;
    listD.push_back("24/7.");
    listD.push_back("theres the door");
    listD.push_back("can I get an amen?");
    listD.push_back("and that's a fact.");
    listD.push_back("so treat yourself.");
    listD.push_back("you feel me?");
    listD.push_back("that's just science.");
    listD.push_back("would I lie?");
    listD.push_back("for reals.");
    listD.push_back("mic drop.");
    listD.push_back("you hidden gem.");
    listD.push_back("snuggle bear.");
    listD.push_back("period.");
    listD.push_back("can I get an amn?");
    listD.push_back("now lets dance.");
    listD.push_back("high five.");
    listD.push_back("say it again!");
    listD.push_back("according to the BBC.");
    listD.push_back("so get used to it.");
    
    string partA, partB, partC, partD;
    
    partA = listA.at(rand()%max);
    partB = listB.at(rand()%max);
    partC = listC.at(rand()%max);
    partD = listD.at(rand()%max);
    
    cout << "*************************************" << endl;
    cout << "      _______                  " << endl;
    cout << "     /      / ,  "<<partA<<partB<<"        " << endl;
    cout << "    /      / /   "<<partC<<partD<<"         " << endl;
    cout << "   /______/ /                    " << endl;
    cout << "   (______(/                    " << endl;
    cout << endl;
    cout << "*************************************" << endl;

    cout << endl;
    return 0;
}