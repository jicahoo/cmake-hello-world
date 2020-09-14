#include <iostream>
#include <map>
using namespace  std;
int main() {
    cout << "hello"  << endl;
    map<string,string> testMap;
    map<string, string>::iterator testMapIter;
    testMap["1"] = "A";
    testMap["2"] = "B";

    testMap.erase("1");
    testMap.erase("3");

    for (testMapIter = testMap.begin(); testMapIter != testMap.end(); testMapIter++) {
        cout << testMapIter->first << " " << testMapIter->second << endl;
    }

    return 0;
}
