#include <iostream>
#include <windows.h>
class Counter {
private:
	int c;
public:
	Counter() {
		c = 1;
	}
	Counter(int num) {
		c = num;
	}
	void plus() {
		c++;
	}
	void minus() {
		c--;
	}
	void print() {
		std::cout << c<<std::endl;
	}

};


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::string answer;
	std::cin >> answer;
	
	if (answer == "��") {
		std::cout<< "������� ��������� �������� ��������: ";
		int c;
		std::cin >> c;
		Counter conc(c);
		for (;;) {
			std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
			char com;
			std::cin >> com;
			if (com == '+') {
				conc.plus();
			}
			if (com == '-') {
				conc.minus();
			}
			if (com == '=') {
				conc.print();
			}
			if (com == 'x') {
				break;
			}
		}
	}
	else {
		Counter conc;
		for (;;) {
			std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
			char com;
			std::cin >> com;
			if (com == '+') {
				conc.plus();
			}
			if (com == '-') {
				conc.minus();
			}
			if (com == '=') {
				conc.print();
			}
			if (com == 'x') {
				break;
			}
		}
	}
	
	

}