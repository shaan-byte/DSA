#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 1️⃣ Create an unordered_map
    unordered_map<string, int> mp;

    // 2️⃣ Insert elements
    mp["apple"] = 10;                 // Using []
    mp.insert({"banana", 20});        // Using insert(pair)
    mp.insert(make_pair("orange", 30));

    cout << "---Initial map---" << endl;
    for (auto &p : mp) cout << p.first << " -> " << p.second << endl;

    // 3️⃣ Access elements
    cout << "\nAccess apple using []: " << mp["apple"] << endl;
    cout << "Access orange using at(): " << mp.at("orange") << endl;

    // 4️⃣ Find elements
    if (mp.find("banana") != mp.end()) cout << "\nBanana exists\n";
    if (mp.find("grape") == mp.end()) cout << "Grape does not exist\n";

    // 5️⃣ Count elements
    cout << "Count apple: " << mp.count("apple") << endl;
    cout << "Count grape: " << mp.count("grape") << endl;

    // 6️⃣ Erase elements
    mp.erase("orange"); // Remove by key
    cout << "\nAfter erasing orange:" << endl;
    for (auto &p : mp) cout << p.first << " -> " << p.second << endl;

    // 7️⃣ Size and empty
    cout << "\nSize: " << mp.size() << endl;
    cout << "Is empty? " << (mp.empty() ? "Yes" : "No") << endl;

    // 8️⃣ Iteration using iterator
    cout << "\nIterating using iterator:" << endl;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // 9️⃣ Clear the map
    mp.clear();
    cout << "\nAfter clear, size: " << mp.size() << endl;

    //  🔟 Bucket info (advanced, optional)
    mp["x"] = 100;
    mp["y"] = 200;
    cout << "\nBucket count: " << mp.bucket_count() << endl;
    cout << "Bucket for key 'x': " << mp.bucket("x") << endl;
    cout << "Load factor: " << mp.load_factor() << endl;

    return 0;
}
