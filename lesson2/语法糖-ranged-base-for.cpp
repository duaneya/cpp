for(dec1:coll){ // collector
    statement
}


for (int i : {2,3,4,5,6}){ // c11 新语法
    cout << i << endl;
}

vector<double> vec;

for (auto elem: vec){ //pass by value
    cout << elem << endl;

}

for (auto& elem : vec){ // pass by reference
    elem *= 3;
}

// foreach 也可以