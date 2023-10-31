#include <vector>
#include <iomanip>
#include <iostream>
using namespace std;

class Van
{
public:
	void drive();
	void board(string name);
	void display() const;

private:
	vector <string> passengers;
};
void Van::drive()
{

}

void Van::board(string name)
{
	int count;
	count++;
	if (count < passengers.size())
	{
		passengers[count] = name;
	}
}

void Van::display() const
{
	cout << "[";
	if (count > 0)
	{
		cout << passengers[0];
		for (int i = 1; i < count; i++)
		{
			cout << ", " << passengers[i];
		}
		cout << "]" << endl;
	}
}

int main()
{
	Van van1(8);
	van1.board("Fred");
	van1.board("Ann");
	van1.board("Manju");
	van1.display();
	cout << "Expected: [Fred, Ann, Manju] \n" << endl;
	van1.drive();
	van1.board("Tim");
	van1.board("Huy");
	van1.board("Amir");
	van1.board("May");
	van1.board("Sue");
	van1.board("Sally");
	van1.board("Amir");
	van1.board("Aoife");
	van1.board("Max");
	van1.board("Dave");
	van1.display();
	cout << "Expected: [Tim, Huy, Amir, May, Sue, Sally, Amir, Aoife] \n" << endl;
	van1.drive();
	van1.display();
	cout << "Expected: [] \n" << endl;
	van1.board("Lucy");
	van1.display();
	cout << "Expected: [Lucy]" << endl;

	return 0;
}
