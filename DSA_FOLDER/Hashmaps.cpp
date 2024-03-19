#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;//string ko int se map krenge

    //Insertion
    //1st Way
    pair<string,int> p = make_pair("akshit",3);
    m.insert(p);

    //2nd Way
    pair<string,int> p2("kumar",2);
    m.insert(p2);

    //3rd Way
    m["markan"] = 1;
    m["markan"] = 4;//1 -> 4 se Update ho jaega, ek int pe do map nahi krr skte


    //Search
    cout<<m["kumar"] << endl;//2 print hojaega
    cout<<m["Unknown"] << endl;//0 print hojaega bcz aisi key he nahi hai, Unkown k liye 0 ki entry banjaegi

    //Another way to search
    cout<<m.at("akshit")<<endl;//3 print hojaega
    cout<<m.at("Unknown")<<endl;//Out of range print krdega
    /*Agar m["unknown"] wale way se unknown access kraa toh woh uski mapping 0 se krdega
    and after m.at("unknown") krne se 0 aayega
    But agar sidha m.at("unknown") krenge toh Out of Range aayega*/

    //Size
    cout<<m.size()<<endl;

    //To check presence of a particular key
    cout<<m.count("bro")<<endl; //Absent k case mein 0 dega
    cout<<m.count("kumar")<<endl; //Present k case mein 1 dega

    //Erase 
    m.erase("akshit");
    cout<<m.size()<<endl;


    //Accessing whole map
    for(auto i:m){
        cout<<i.first << " "<<i.second<<endl;//first left wali cheex ko batata hai, second right wali ko
    }

    //Use of iterartor, ek ek krke access krenge
    unordered_map<string,int> :: iterator it = m.begin();//Iterator define krdiya

    while(it != m.end()){
        cout<<it->first<<" "<<it->second <<endl;
        it++;
    }
    //Unordered map mein chhezein randomly print hoti hai, but map mein niss order mein daali ussii mein print hogi

}

//Question - 1, Maximum Frequency Number, Explaination on NB
// #include<bits/stdc++.h>
// int maximumFrequency(vector<int> &arr, int n)
// {
//    unordered_map<int,int>count;
//     int maxAns=0,maxFreq=0;
//     int s = arr.size();
//     for(int i=0;i<s;i++){
//         count[arr[i]]++;
//         maxFreq = max(maxFreq,count[arr[i]]);
//     }

//     for(int i=0;i<s;i++){
//         if(maxFreq == count[arr[i]]){
//             maxAns = arr[i];
//             break;
//         }
//     }
    
//     return maxAns;
// }