#pragma once
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct Task
{
	string description;
	bool done;
};

void SaveTasksToFile(const vector<Task>& tasks, const string& fileName);
vector<Task> LoadTasksFromFile(string& fileName);


