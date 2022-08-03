/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    
    string doSum(string a, string b)
{
    if(a.size() < b.size())
        swap(a, b);

    int j = a.size()-1;
    for(int i=b.size()-1; i>=0; i--, j--)
        a[j]+=(b[i]-'0');

    for(int i=a.size()-1; i>0; i--)
    {
        if(a[i] > '9')
        {
            int d = a[i]-'0';
            a[i-1] = ((a[i-1]-'0') + d/10) + '0';
            a[i] = (d%10)+'0';
        }
    }
    if(a[0] > '9')
    {
        string k;
        k+=a[0];
        a[0] = ((a[0]-'0')%10)+'0';
        k[0] = ((k[0]-'0')/10)+'0';
        a = k+a;
    }
    return a;
}

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        
        ListNode * p = new ListNode();
      
        ListNode *head = p;
        // long long num1=0,num2=0;
        long long num1,num2;

        long long len = 0;
        string str1= "";
        string str2 = "";
        
        stringstream ss1,ss2;
        
         while(l1 != nullptr)
        {

            int x1 = l1->val;
            str1 +=  x1 + '0';
            l1 = l1->next;
        }
        reverse(str1.begin(), str1.end());
        cout << str1 << endl;
        
        while(l2 != nullptr)
        {

            int x2 = l2->val;
            str2 +=  x2 + '0';
            l2 = l2->next;
        }
        reverse(str2.begin(), str2.end());
        cout << str2 << endl;
        
        ss1<< str1;
        ss1>>num1;
        
        ss2<<str2;
        ss2>>num2;
        
        cout << num1 << " " << num2 << endl;

        string sum3 = doSum(str1, str2);
        cout << sum3 << endl;

        len = sum3.length();
        cout << len << endl;
        len--;
        while(len>0)
        {
            len--;
            p = new ListNode(0,p);
        }
        
        head = p;
        
        for(int i =sum3.length()-1;i>=0;i--)
        {
            int x = sum3[i] - '0';
            p->val = x;
            p = p->next;
            // cout << x << endl;
        }
        
        return head;
    
    }
};