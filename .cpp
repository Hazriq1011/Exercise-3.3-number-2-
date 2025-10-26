#include <iostream>
using namespace std;

int main()

{
	int totaltime, remain;
	int SCND_TO_HOUR = 3600;
	int SCND_TO_MINUTE = 60;
	

	cout << "Enter the total time in seconds:";
	cin >> totaltime;
	SCND_TO_HOUR = totaltime / 3600;
	SCND_TO_MINUTE = (totaltime - (SCND_TO_HOUR * 3600)) / 60;
	remain = totaltime - ((SCND_TO_MINUTE * 60) + (SCND_TO_HOUR * 3600));

	cout << totaltime << " second are equal to " << SCND_TO_HOUR << " hours," << SCND_TO_MINUTE << " minutes and " << remain << " seconds " << endl;
	return 0;
}