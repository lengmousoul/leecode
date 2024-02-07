#include "queue.h"


void queue_init(u8 **head, u8 **tail, u8 *pbuf)
{
    *head = pbuf;
    *tail = pbuf;
}
void queue_in(u8 **head, u8 **tail, u8 *pbuf,u8 len, u8 *pdata, u8 data_len)
{

    for(int i = 0 ; i < data_len; i++ ,pdata++)
    {   **tail = *pdata;  // 数据入列
        (*tail)++;          // 队尾指针+1
        if(*tail == pbuf + len) // 队尾到达缓存末端 
        {
            *tail = pbuf;
        }
        if (*tail == *head) // 队尾与队头相等，说明需要剔除老的数据了
        {
            (*head) ++; 
            if(*head == pbuf + len) //判断是否到达缓存末端 
            {
                *head = pbuf;
            }
        }
    }    
}

u8   queue_out(u8 **head, u8 **tail, u8 *pbuf,u8 len, u8 *pdata)
{
    u8 status = 0;
    //  首先判断缓存数组是否有地址 
    if(*head != *tail)
    {
        *pdata = **head;
        status = 1;
        *head++;
        if(*head == pbuf + len)//判断是否到达缓存末端 
        {
            *head = pbuf;
        }
    }

    return status;
}

/**
 * @brief 获得队列里边的个数
 * @param[in]  **head 指向队头指针
 * @param[in]  **tail 指向队尾指针
 * @param[in]  *pbuf  指向缓存数组
 * @param[in]  *len   缓存数组大小
 * @return 队列里边的个数
*/
u8  queue_cnt(u8 **head, u8 **tail, u8 *pbuf, u8 len)
{
    if(*tail > *head)
    {
        return *tail - * head;
    }

    if(*tail < *head)
    {
        return *tail + len - *head;
    }
}


