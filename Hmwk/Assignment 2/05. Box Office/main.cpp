// Jonathan Munoz
// 05. Box Office

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const unsigned short APRICE = 6, CPRICE = 3;	// adult price, child price
	const float GRSSPER = 0.2;			// gross percentage
	string movie;
	unsigned aticket, cticket, asales, csales;	// adult tickets, child tickets, adult sales, child sales
	float grsspft, netpft, dist;
	
	cout << "What is the name of the movie? ";
	getline(cin, movie);
	
	cout << "\nHow many adult tickets were sold?\n";
	cin >> aticket;
	cout << "How many child tickets were sold?\n";
	cin >> cticket;
	
	asales = APRICE * aticket;
	csales = CPRICE * cticket;
	grsspft = asales + csales;
	netpft = grsspft * GRSSPER;
	dist = grsspft - netpft;
	
	cout << setprecision(2) << fixed << endl;
	cout << left << setw(35) << "Movie Name:" << "\"" << movie << "\"" << endl;
	cout << left << setw(35) << "Adult Tickets Sold:" << right << setw(6) << aticket << endl;
	cout << left << setw(35) << "Child Tickets Sold:" << right << setw(6) << cticket << endl;
	cout << left << setw(35) << "Gross Box Office Profit:" << right << "$" << setw(8) << grsspft << endl;
	cout << left << setw(35) << "Net Box Office Profit:" << right << "$" << setw(8) << netpft << endl;
	cout << left << setw(35) << "Amount Paid to Distributor:" << right << "$" << setw(8) << dist << endl;
	
	return 0;
}