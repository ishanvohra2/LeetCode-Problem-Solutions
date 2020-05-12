    int first = m-1;
    int second = n-1;

    for(int i = m+n-1; i>=0; i--){
        if(second < 0){
            break;
        }

        if(nums1[i] > nums2[second]){
            nums1[i] = nums1[first];
            first--;
        }
        else {
            nums1[i] = nums2[second];
            second--;
        }
    }