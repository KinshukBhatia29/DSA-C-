#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main() {
    unordered_map<string, int> m;
    // Insertion
    // 1
    m["Kinshuk"] = 3;
    // 2
    pair<string, int> pair2 = make_pair("Is", 3);
    m.insert(pair2);
    // 3
    pair<string, int> pair3("girl", 4);
    m.insert(pair3);

    // Search
    cout << "Value associated with 'Is': " << m.at("Is") << endl;
    cout << "Value associated with 'girl': " << m["girl"] << endl;
    cout << "Value associated with 'bhatia': " << m["bhatia"] << endl;
    cout << "Size of map: " << m.size() << endl;
    cout << "Count of 'girl' in map: " << m.count("girl") << endl;

    m.erase("bhatia");

    return 0;#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> m;
    // Insertion
    // 1
    m["Kinshuk"] = 3;
    // 2
    pair<string, int> pair2 = make_pair("Is", 3);
    m.insert(pair2);
    // 3
    pair<string, int> pair3("girl", 4);
    m.insert(pair3);

    // Search
    cout << "Value associated with 'Is': " << m.at("Is") << endl;
    cout << "Value associated with 'girl': " << m["girl"] << endl;
    cout << "Value associated with 'bhatia': " << m["bhatia"] << endl;
    cout << "Size of map: " << m.size() << endl;
    cout << "Count of 'girl' in map: " << m.count("girl") << endl;

    m.erase("bhatia");
    for(auto i:m)
{
	cout<<i.first<<" "<<i.second<<endl;
}
//iterator
unordered_map<string, int>:: iterator it=m.begin();
while(it !=m.end())
{
	cout<<it->first<<" "<<it->second<<endl;
	it++;
}
    return 0;
}
