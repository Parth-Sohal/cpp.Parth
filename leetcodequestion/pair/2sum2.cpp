vector<int> arr{3,2,4};
    int start = 0;
    int target  = 6;
    int end = arr.size() - 1;
    while(start < end){
        if(arr[start] + arr[end] == target){
            cout << start << " " << end;
            break;
        }
        else if(arr[start] + arr[end] > target){
            start++;
        }
        else{
            end--;
        }
    }