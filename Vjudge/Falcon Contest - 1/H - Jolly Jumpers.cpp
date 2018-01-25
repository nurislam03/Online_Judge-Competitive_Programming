#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector <int> taken;

	while (cin >> n)
    {
		if (n == 0)
        {
			cout << "Not jolly" << endl;
			continue;
		}
		taken.clear();
        int prevNum,currNum;
		for (int i = 0; i < n; i++)
        {
			cin >> currNum;
			if (i > 0) taken.push_back(abs(currNum - prevNum));
            prevNum = currNum;
		}
		sort (taken.begin(), taken.end());

        bool res = true;
		for (int i = 0; i < taken.size(); i++)
        {
			if (taken[i] != i+1)
            {
				res = false;
				break;
			}
		}
        if(res) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
	}
	return 0;
}
