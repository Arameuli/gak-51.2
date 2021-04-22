#include <iostream>
#include"Reanimacia.h"
#include<vector>
using namespace std;
void Sort(vector<Reanimacia> a) {
	for (int j = 0; j < a.size(); j++) {
		for (int i = 0; i < a.size() - 1; i++) {
			if (a[i].totalprice() < a[i + 1].totalprice())
				swap(a[i], a[i + 1]);
		}
	}

}
int main()
{
	vector<Reanimacia> s;
	vector<Reanimacia> b;
	Reanimacia t;
	cin >> t.rprice >> t.pprice;
	while (cin >> t.name >> t.lastname >> t.diagnose >> t.rday >> t.pday >> t.gday) {
		if (t.gday != -1)
			s.push_back(t);
		else b.push_back(t);
	}
	Sort(s);
	for (int i = 0; i < s.size(); i++) {
		s[i].print();
	}
}
