#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;
using namespace System::IO;
class appoint
{
public:
	string doc, date, pid, mer, time;
};

static void input(appoint p)
{
	fstream file, xfile;
	file.open(p.doc+".txt", ios::in | ios::out);
	appoint a;
	string xf;
	if (!file.is_open()) {
		file.close();
		xfile.open(p.doc+".txt", ios::out);
		cout << "1";
		xfile << p.date << "|" << p.mer << "|" << p.time << "|" << p.doc << "|" << p.pid << "|" << endl;
		xfile.close();
		return;
	}
	file.close();
	file.open(p.doc+".txt");
	string x = p.date + "|" + p.mer + "|" + p.time + "|" + p.doc + "|" + p.pid + "|";
	int i = 0;
	string sf[1000];
	cout << "2";
	while (!(file.eof())) {
		cout << "x" << sf[i] << endl;
		file >> sf[i];
		if (sf[i] == x) {
			return;
		}
		if (file.eof()) {
			break;
		}
		i++;
	}
	file.close();
	sf[i++] = p.date + "|" + p.mer + "|" + p.time + "|" + p.doc + "|" + p.pid + "|";
	cout << "xy" << sf[i] << endl;
	string temp;
	for (int k = 0; k < i; k++) {
		for (int j = k + 1; j < i; j++)
		{
			if (sf[k] > sf[j])
			{
				cout << sf[k] << " " << sf[j] << endl;
				temp = sf[k];
				sf[k] = sf[j];
				sf[j] = temp;
			}
		}
	}


	xfile.open(p.doc+".txt", ios::out);
	for (int j = 0; j < i; j++) {
		cout << sf[j] << endl;
		xfile << sf[j] << endl;
	}
	xfile.close();
	file.close();
}
static vector<string> splitStrings(string str, char dl)
{
	string word = "";
	int num = 0;
	str = str + dl;
	int l = str.size();
	vector<string> substr_list;
	for (int i = 0; i < l; i++) {
		if (str[i] != dl)
			word = word + str[i];

		else {
			if ((int)word.size() != 0)
				substr_list.push_back(word);
			word = "";
		}
	}
	return substr_list;
}
static void merge_files(string fn1, string fn2, string fn3)
{
	string s[1000];
	int x = 0;
	string fns[2] = { fn1,fn2 };
	fstream fp;
	for (int i = 0; i < 1000; i++)
	{
		s[i] = "";
	}
	for (int i = 0; i < 2; i++)
	{
		cout << fns[i] << endl;
		fp.open(fns[i], ios::in);
		cout << "1";
		if (!fp.is_open()) {
			cout << "2" << endl;
			fp.close();
			continue;
		}
		else {
			cout << "3" << endl;
			while (!(fp.eof())) {

				fp >> s[x];
				cout << s[x];
				if (fp.eof()) {
					break;
				}
				x++;
			}
			fp.close();
		}
	}
	string temp;
	for (int k = 0; k < x; k++) {
		for (int j = k + 1; j < x; j++)
		{
			if (s[k] > s[j])
			{
				temp = s[k];
				s[k] = s[j];
				s[j] = temp;
			}
		}
	}
	fstream file;
	file.open(fn3, ios::out);
	for (int j = 0; j < x; j++) {
		cout << s[j] << endl;
		file << s[j] << endl;
	}
	file.close();
}
static void k_merge(string dept)
{
	string fname[4];
	string s[1000];
	int x = 0;
	string filname[6] = { "11.txt","22.txt","111.txt","33.txt","44.txt","222.txt"};
	if (dept == "Physician")
	{
		fname[0] = "Dr.Naveen.txt";
		fname[1] = "Dr.Reena.txt";
		fname[2] = "Dr.Prasadh.txt";
		fname[3] = "Dr.Rekha.txt";
		merge_files(fname[0], fname[1], filname[0]);
		merge_files(fname[2], fname[3], filname[1]);
		merge_files(filname[0], filname[1], filname[2]);
	}
	else if (dept == "Pediatrics")
	{
		fname[0] = "Dr.Nagraj.txt";
		fname[1] = "Dr.Suraj.txt";
		fname[2] = "Dr.Preeti.txt";
		fname[3] = "Dr.Mahesh.txt";
		merge_files(fname[0], fname[1], filname[0]);
		merge_files(fname[2], fname[3], filname[1]);
		merge_files(filname[0], filname[1], filname[2]);
	}
	else if (dept == "Neurology")
	{
		fname[4] = "";	
		fname[0] = "Dr.Mansi.txt";
		fname[1] = "Dr.Prabhu.txt";
		fname[2] = "Dr.Lakshmi.txt";
		fname[3] = "Dr.Nitesh.txt";
		merge_files(fname[0], fname[1], filname[3]);
		merge_files(fname[2], fname[3], filname[4]);
		merge_files(filname[3], filname[4], filname[5]);
	}
	else if (dept == "Cardiology")
	{
		fname[4] = "";
		fname[0] = "Dr.Manisha.txt";
		fname[1] = "Dr.Suresh.txt";
		fname[2] = "Dr.Manu.txt";
		fname[3] = "Dr.Manith.txt";
		merge_files(fname[0], fname[1], filname[3]);
		merge_files(fname[2], fname[3], filname[4]);
		merge_files(filname[3], filname[4], filname[5]);
	}
	
}
