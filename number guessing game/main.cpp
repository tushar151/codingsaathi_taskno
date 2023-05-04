#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "Guess My Number Game\n\n";
    int score=0;
	do
	{
		cout << "Enter a guess between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num){
			cout << "Too high!\n\n";}
		else if (guess < num){
			cout << "Too low!\n\n";}
		else{
            score++;
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";}
        if(tries>20){

            cout<<"TOO MANY TRIES PERFORMED AFTER THIS -1 FROM SCORE FOR EVERY TRIAL";
            score--;
        }
        cout<<"SCORE="<<score<<endl;

	} while (guess != num);

	return 0;
}
