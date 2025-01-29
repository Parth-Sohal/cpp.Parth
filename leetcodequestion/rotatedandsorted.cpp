vector<int> heap = sortt;
        reverse(heap.begin(),heap.end());
        reverse(heap.begin(),heap.begin()+i);
        reverse(heap.begin()+i,heap.end());