void min_max2(int left, int right, int t[], int &min, int &max)
{
    if(left == right)
        min = max = t[left];    // jeden element
    else
        if(left == right - 1)   // dwa elementy
      if(t[left] < t[right])
      {
          min = t[left];
          max = t[right];
      } 
      else 
      {
          min = t[right];
          max = t[left];
      }
    else 
    {
        int temp_min1, temp_max1, temp_min2, temp_max2, mid;
        mid = (left + right) / 2;
        min_max2(left, mid, t, temp_min1, temp_max1);
        min_max2(mid + 1, right, t, temp_min2, temp_max2);
        if(temp_min1 < temp_min2)   // (1)
            min = emp_min1;
        else    
            min = temp_min2;
        if(temp_max1 > temp_max2)   // (2)
            max = temp_max1;
        else
            max = temp_max2;
    }
}