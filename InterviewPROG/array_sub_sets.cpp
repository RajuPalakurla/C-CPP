//
//  array_sub_sets.cpp
//  InterviewPROG
//
//  Created by Raju Palakurla on 17/02/18.
//  Copyright © 2018 Raju Palakurla. All rights reserved.
//

#include"Headerfiles.hpp"
#include <map>
using namespace std;
vector<vector<int>> fin_res;
void splt_array(int a[],int strindx,int endindx,int size){
    vector<int> re;
    int diff = endindx - strindx;
    int setsize = diff+1;
    //cout<<"Set Size :"<<setsize<<endl;
    int len = size;//sizeof(a)/sizeof(a[0]);
    int k = 0,size1 = 0;
    for(int i = strindx;i<len && endindx < len;i++,endindx++){
        if(diff == 0){
            cout<<"{"<<a[i]<<"}"<<endl;
            re.push_back(a[i]);
            fin_res.push_back(re);
            continue;
        }
        for(int j = i;j<len-1;j++){
            cout<<"{"<<a[i]<<" ";
            re.push_back(a[i]);
            for(k = j+1,size1 = 1;size1<setsize && k<size;k++,size1++){
              cout<<a[k]<<" ";
                re.push_back(a[k]);
            }
            cout<<"}"<<endl;
            fin_res.push_back(re);
            re.erase(re.begin(),re.end());
        }
        
    }
    
}
void display_sets(){
    map<int,int> mapobj;
    map<int,int>::iterator itr;
    int sum = 0,indx = 1;
    for(int i = 0;i<fin_res.size();i++){
        vector<int> dis;
        dis = fin_res[i];
        cout<<"Set Num : "<<i+1<<" is {";
        for(int j = 0;j<dis.size();j++){
            cout<<dis[j]<<" ";
            sum +=dis[j];
        }
        cout<<"}"<<" and sum is :"<<sum<<endl;
        itr = mapobj.find(sum);
        if(itr == mapobj.end()){
            mapobj.insert(make_pair(sum,indx++));
        }
        //cout<<"sum "<<i+1<<" is "<<sum<<endl;
        sum = 0;
    }
    itr = mapobj.begin();
    while(itr != mapobj.end()){
        cout<<"indx value = "<<itr->second<<" and sum value = "<<itr->first<<endl;
        itr++;
    }
}
void array_sets(int a[],int size)
{
    vector<int> res;
    int strindx,endindx;
    for(int i = 0;i<size;i++){
        //cout<<"rotation "<<i+1<<endl;
        strindx = 0;
        endindx = i;
        splt_array(a,strindx,endindx,size);
        
    }
    //display_sets();
    
}
