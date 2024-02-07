#ifndef _QUEUE_H
#define _QUEUE_H

typedef unsigned char u8;

// 队列封装为结构体 包含 ： 队尾 队头 缓存buf
typedef struct  
{
    u8  *head;
    u8  *tail;
    u8  buff[4];
} queue4;


#define Queue_init(x)  queue_init((u8**)&(x).head, (u8**)&(x).tail,(u8*)(x).buff)
#define Queue_in(x, y, z)  queue_in((u8**)&(x).head, (u8**)&(x).tail,(u8*)(x).buff,sizeof((x).buff)/sizeof((x).buff[0]), y,z)
#define Queue_out(x,y)    queue_out((u8**)&(x).head, (u8**)&(x).tail,(u8*)(x).buff,sizeof((x).buff)/sizeof((x).buff[0]), y)
#define Queue_cnt(x)   queue_in((u8**)&(x).head, (u8**)&(x).tail,(u8*)(x).buff,sizeof((x).buff)/sizeof((x).buff[0]))



extern void queue_init(u8 **head, u8 **tail, u8 *pbuf);
extern void queue_in(u8 **head, u8 **tail, u8 *pbuf, u8 len, u8 *pdata, u8 data_len);
extern u8   queue_out(u8 **head, u8 **tail, u8 *pbuf,u8 len, u8 *pdata);
extern u8   queue_cnt(u8 **head, u8 **tail, u8 *pbuf, u8 len);


#endif