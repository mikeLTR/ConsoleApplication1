/**
   The following program simulates shuffling of cards. While it does the job,
    it is not very object-oriented. There are no Card objects!
    Fix that by defining a Card class and using a vector of Card objects instead of vector<string>.
*/
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

// Define a class Card
class Card
{
public:
    // Card(string v, string s);
    void add_card(string); //my code

    // Gets cardsVector size
    int get_vector_size();

    //Get vectors cell value
    string get_value(int number);

private:

    string cardName;
    int cardPosition;

/* Your code goes here */
};

void Card::add_card(string cardsName)
{
    cardsVector.push_back(cardsName);
}

int Card::get_vector_size()
{
    int vectorSize = cardsVector.size();
    return vectorSize;
}

string Card::get_value(int number)
{
    string cellValue = cardsVector[number];
    return cellValue;
}
/* Your code goes here */

int main()
{
    vector <Card> cards;
    srand(42);
    // Use a vector of Card objects
    /* Your code goes here */
    // vector <string> cardsVector{ "a", "b", "c", "d" }; // my code
    Card Ace_of_Spades;
    Card Nine_of_Hearts;
    Card Queen_of_Diamonds;
    Card Six_of_Clubs;

    Ace_of_Spades.add_card("Ace of Spades");
    Nine_of_Hearts.add_card("Nine of Hearts");
    Queen_of_Diamonds.add_card("Queen of Diamond");
    Six_of_Clubs.add_card("6 of Clubs");


    // Add the following Card objects to the vector:
    // Ace of Spades
    // 9 of Hearts
    // Queen of Diamonds
    // 6 of Clubs
    /* Your code goes here */

    const int CARDS = 4;
    const int SHUFFLES = 10;
    for (int i = 0; i < SHUFFLES; i++)
    {
        int from = rand() % CARDS;
        int to = rand() % CARDS;

        
        swap(cards[from], cards[to]);

    }

    for (int i = 0; i < CARDS; i++)
    {
        // Write code to print a Card object.
        // Make a suitable member function.
        /* Your code goes here */
    }

    return 0;
}