/* in this app the bug go up to the top of the pole from 0 position. Each step mpve hip up on a 10 inch. The hights of the pole is 100 inch.
* The are some functions for this game:
	1. init() @ is mean that we are initialize a bub on a pole wit ha 0 inch position. 
	2. bug_step() @ is mean that is bug climb on a 1 step by a 10 inch.
	3. bug_position() @ is a requested position of the bug on the pole.
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class bug
{
public:
		void init();
		void step();
		int position() const;
private:
		int bug_position;
};
	void bug :: init()
{
		bug_position = 0;
}
	int bug :: position() const
{
		return bug_position;
}
	void bug :: step()
{
		bug_position = bug_position + 10;
}
	
	int main()
	{
		bug Bugsy;
		bug Tobby;

		Bugsy.init();
		Tobby.init();
		Bugsy.step();
		int position = Bugsy.position();
		cout << position << endl;

		Bugsy.step();
		Bugsy.step();
		Bugsy.step();


		cout << Bugsy.position() << endl;
		Bugsy.init();

		position = Bugsy.position();
		cout << Bugsy.position() << endl << endl;
		Tobby.step();
		Tobby.step();
		Tobby.step();
		Tobby.step();
		Tobby.step();
		cout << Tobby.position() << endl;
		cout << Bugsy.position() << endl;

	}


