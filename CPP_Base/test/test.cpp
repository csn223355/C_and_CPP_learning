/**
 *@file test.cpp
 *@author chenshining
 *@version v1.0
 *@date 2023-08-14
 */
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

typedef struct Box{
    int x_min;
    int y_min;
    int x_max;
    int y_max;
    float score;
    string label;

}Box;

int main(){
    vector<Box> Boxes = {{1,2,3,4,0.5,"head"},
                        {2,2,6,7,0.8,"head"},
                        {2,2,6,7,0.8,"normal"},
                        {2,2,6,7,0.8,"abnormal"},};
    map<string,vector<Box>> result;
    
    // Grouping boxes by label
    for (const Box& box : Boxes) {
        result[box.label].push_back(box);
    }

    for (const auto& pair : result) {
        cout << "Label: " << pair.first << endl;
        for (const Box& box : pair.second) {
            cout << "Box: (" << box.x_min << ", " << box.y_min << ", " << box.x_max << ", " << box.y_max << ")"
                 << " Score: " << box.score << endl;
        }
        cout << endl;
    }
    return 0;

}