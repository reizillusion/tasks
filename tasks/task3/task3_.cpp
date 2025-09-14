#include<iostream>
#include<string>
#include <fstream>
#include<vector>
using namespace std;
int main(int argc, char* argv[]) {
	string path = argv[1];
	ifstream ifs;
	ifs.open(path, ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return 1;
	}
	string line;
	vector<string>vec;
	while (getline(ifs, line)) {
		vec.push_back(line);
	}
	ifs.close();
	int i;
	int n = vec.size();
	int shoot_num=0, move_num=0, scan_num=0;

	for (i = 0; i < n; i++) {
    if(vec.at(i)=="SHOOT"){
		shoot_num++;
    }
	else if (vec.at(i) == "MOVE") {
		move_num++;
	}
	else if (vec.at(i) == "SCAN") {
		scan_num++;
	}

	}

	cout << "MOVE命令执行了" << move_num << "次" << endl << "SHOOT命令执行了" << shoot_num << "次" << endl << "SCAN命令执行了" << scan_num << "次" << endl;
	return 0;
}
