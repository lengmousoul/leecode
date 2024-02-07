#include <stdio.h>
#include <string.h>
// #include "min_sub_array.h"
// // #include "queue.h"
// // queue4 queue_msg;

// // int main()
// // {   
    
// //     Queue_init(queue_msg);
// //     printf("queue_msg buff size:%d\r\n", sizeof(queue_msg.buff));
// //     printf("&queue_msg = 0x%x, queue_msg.buf = 0x%x, queue_msg.head = 0x%x, queue_msg.tail = 0x%x\r\n",&queue_msg,queue_msg.buff,queue_msg.head,queue_msg.tail);

// //     for (int i = 0 ; i < 4 ; i++) 
// //    {
// //         u8 a=i;
// //         Queue_in(queue_msg, &a, 1);
// //         printf("&queue_msg = 0x%x, queue_msg.buf = 0x%x, queue_msg.head = 0x%x, queue_msg.tail = 0x%x\r\n",&queue_msg,queue_msg.buff,queue_msg.head,queue_msg.tail);
// //         printf(" queue_msg.buf[0] = 0x%x, queue_msg.buf[1] = 0x%x, queue_msg.buf[2] = 0x%x,queue_msg.buf[3] = 0x%x\r\n",queue_msg.buff[0],queue_msg.buff[1],queue_msg.buff[2],queue_msg.buff[3]);

// //    } 
// //     u8 a = 5;
// //     Queue_in(queue_msg, &a, 1);
// //     printf("&queue_msg = 0x%x, queue_msg.buf = 0x%x, queue_msg.head = 0x%x, queue_msg.tail = 0x%x\r\n",&queue_msg,queue_msg.buff,queue_msg.head,queue_msg.tail);
// //     printf(" queue_msg.buf[0] = 0x%x, queue_msg.buf[1] = 0x%x, queue_msg.buf[2] = 0x%x,queue_msg.buf[3] = 0x%x\r\n",queue_msg.buff[0],queue_msg.buff[1],queue_msg.buff[2],queue_msg.buff[3]);
    
// //     u8 out_data;
// //     Queue_out(queue_msg, &out_data);
// //     printf("out_data is : %d\r\n",out_data);

// //     return 0;
// // }








// // 【1 3 4 5 】3  
char  remove_element(char* nums, char len , char target)
{
    int slow_index = 0;
    for(int fast_index = 0; fast_index < len; fast_index++)
    {
        if(target != nums[fast_index])
        {
            nums[slow_index] = nums[fast_index];
            slow_index++;
        }
    }
    return slow_index;
}

int main(int argc, char const *argv[])
{
    char len;
    printf("please input n\r\n");
    scanf("%d",&len);
    char nums[len];
    printf("please input1 array\r\n");
    for(int i = 0; i < len; i++)
    {   char j;
        scanf("%d",&j);
        nums[i] = j;
    } 
    printf("please input target\r\n");
    int target;
    scanf("%d",&target);
    char ret;
    ret = remove_element(nums, len, target);
    printf("ret = %d\r\n",ret);
}


// int quick_sort(char * nums, char left, char right)
// {
//     if(left < right)
//     {
//         return 0;
//     }
//     char base = nums[left];
    

// }











// // char* sort_square(char* nums, char len , char target)
// // {
// //     char k = len - 1;
// //     char ret_buf[len];
// //     for(int i = 0, j = len - 1; i <= j;)
// //     {
// //         if(nums[i]*nums[i] < nums[j]*nums[j])
// //         {
// //             ret_buf[k--] = nums[j]*nums[j];
// //             j--;
// //         }
// //         else
// //         {
// //             ret_buf[k--] = nums[j]*nums[j];
// //             i++;
// //         }
// //     }
// //     return ret_buf;
// // }
