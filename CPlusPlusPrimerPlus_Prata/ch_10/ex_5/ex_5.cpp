#include<iostream>
#include"Stack.h"

using std::cout;
using std::cin;
using std::endl;


void push(Stack& s, Item& i);
void pop(Stack& s, Item& i, double& tot, double val);
void print_total(double);
void running_total(double&, double);

int main() {
		using namespace std;
		Stack st; // create an empty stack

		customer first{ "Charlie", 20.5 };
		customer second{ "Liza", 100.0 };
		customer third{ "Barry", 50.0 };
		customer fourth{ "Ann", 10.0 };

		double total = 0;

		cout << "List of the customers and payments:" << endl;
		cout << first.fullname << first.payment << endl;
		cout << second.fullname << second.payment << endl;
		cout << third.fullname << third.payment << endl;
		cout << fourth.fullname << fourth.payment << endl;
		cout << "Running total: " << total << endl;

		cout << "Please enter command: 1 for push, 2 for pop, 3 for exit: ";
		//char ch;
		char cust[35];
		cout << "Please enter push to add a customer into stack,\n"
			<< "pop to remove from the stack, or Q to quit.\n";
		int customerNum;;

		while (cin >> cust && strcmp(cust, "Q"))
		{
			while (cin.get() != '\n')
				continue;
			/*if (!isalpha(ch))
			{
				cout << '\a';
				continue;
			}*/
			if (!strcmp(cust, "push")) {
				/* ... */
				cout << "Enter 1 for Charlie, 2 for Liza, 3 for Barry, 4 for Ann: ";
				cin >> customerNum;
				switch (customerNum)
				{
				case 1:
					push(st, first);
					break;
				case 2:
					push(st, second);
					break;
				case 3:
					push(st, third);
					break;
				case 4:
					push(st, fourth);
					break;
				default:
					cout << "Try again: ";
					continue;
				}
			}
			else if (!strcmp(cust, "pop")) {
				/*...*/
				cout << "Enter 1 for Charlie, 2 for Liza, 3 for Barry, 4 for Ann: ";
				cin >> customerNum;
				switch (customerNum)
				{
				case 1:
					pop(st, first, total, first.payment);
					break;
				case 2:
					pop(st, second, total, second.payment);
					break;
				case 3:
					pop(st, third, total, third.payment);
					break;
				case 4:
					pop(st, fourth, total, fourth.payment);
					break;
				default:
					cout << "Try again: ";
					continue;
				}
			}
			else continue;
		}

		cout << "Bye\n";
		return 0;
}

void running_total(double& tot, double val) {
	tot += val;
}


void print_total(double t)
	{
		cout << "Total is: " << t << endl;
	}

void push(Stack& s, Item& i) {
	if (s.isfull())
		cout << "stack already full\n";
	else
		s.push(i);
}

void pop(Stack& s, Item& i, double& tot, double plus) {
	if (s.isempty())
		cout << "stack already empty\n";
	else {
		s.pop(i);
		running_total(tot, plus);
		cout << "Customer " << i.fullname << " popped\n";
		print_total(tot);
	}
}





	//	switch (ch)
	//	{
	//	case 'A':
	//	case 'a': cout << "Enter a PO number to add: ";
	//		cin.getline(cust);
	//		if (st.isfull())
	//			cout << "stack already full\n";
	//		else
	//			st.push(cust);
	//		break;
	//	case 'P':
	//	case 'p': if (st.isempty())
	//		cout << "stack already empty\n";
	//			else {
	//		st.pop(po);
	//		cout << "PO #" << po << " popped\n";
	//	}
	//			break;
	//	}
	//	cout << "Please enter A to add a purchase order,\n"
	//		<< "P to process a PO, or Q to quit.\n";
	//}