#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class BrowserHistory {
    stack<string> browserStack, fwdStack;

public:
    BrowserHistory(string homepage) { 
      browserStack.push(homepage); 
    }

    void visit(string url) {
        browserStack.push(url);
        while (!fwdStack.empty()) {
            fwdStack.pop();
        }
    }

    string back(int steps) {
        while (steps--) {
            if (browserStack.size() > 1) {
                fwdStack.push(browserStack.top());
                browserStack.pop();
            } else {
                // Home page is present
                // back not possible
                break;
            }
        }

        return browserStack.top();
    }

    string forward(int steps) {
        while (steps--) {
            if (!fwdStack.empty()) {
                browserStack.push(fwdStack.top());
                fwdStack.pop();
            } else {
                // No forward
                break;
            }
        }
        return browserStack.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */