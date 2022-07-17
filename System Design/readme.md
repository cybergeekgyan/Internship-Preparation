## SYSTEM DESIGN ONLINE RESOURCE


- [System Design (Gaurav Sen) Youtube](https://www.youtube.com/playlist?list=PLMCXHnjXnTnvo6alSjVkgxV-VH6EPyvoX)
- [System Design Primer Course (sudoCode) Youtube](https://www.youtube.com/playlist?list=PLTCrU9sGyburBw9wNOHebv9SjlE4Elv5a)
- [Low Level Design (GitHub)](https://github.com/topics/low-level-design)
- [Low Level Design steps and resources](https://www.youtube.com/watch?v=B3zrIwz_t4M&t=1s)
- [System Design (SDE SKills) Youtube](https://www.youtube.com/playlist?list=PLBtMh4xfa9FHSMKKgPZcPfoPbZmND5PC-)
- [System Design (Scaler) Youtuhe](https://www.youtube.com/watch?v=LsDZab4GpVc)

- resources for preparation : https://www.interviewbit.com/courses/system-design/
- [System Design Cheatsheet](https://gist.github.com/vasanthk/485d1c25737e8e72759f)
- [Awesome System Design (A.K.A. Distributed Systems) resources.](https://github.com/madd86/awesome-system-design)
- [System Design Interview](https://github.com/checkcheckzz/system-design-interview)
- [System Design Primer](https://github.com/donnemartin/system-design-primer)
- [System Design Preparation](https://github.com/shashank88/system_design)
- [collection of awesome design systems](https://github.com/alexpate/awesome-design-systems?)
- [Low Level Design Primer](https://github.com/prasadgujar/low-level-design-primer)

### Important Concepts

1. Scalability
2. Performance
3. Latency and Throughput
4. Consistency
5. Availability
6. Partition Tolerance
7. CAP Theorem
8. Domain Name System
9. Content Delivery Network
10. Load Balancers and Reverse Proxy
11. Microservices
12. Databases
13. Caching
14. Message Queues

### Standard Questions

1. Pastebin
2. TinyURL
3. Uber
4. BookMyShow
5. Twitter Feed
6. Facebook Messenger
7. Search in Instagram
8. Video Streaming Service


==> **STEPS TO APPROACH A PROBLEM**

It is recommended you follow the following steps to solving 

- Feature expectations ( First 2 mins ) : 
  
  - As said earlier, there is no wrong design. 
  - There are just good and bad designs and the same solution can be a good design for one use case and a bad design for the other. 
  - It is extremely important hence to get a very clear understanding of whats the requirement for the question.

- Estimations ( 2-5 mins ) 
  
  - Next step is usually to estimate the scale required for the system. 
  - The goal of this step is to understand the level of sharding required ( if any ) and to zero down on the design goals for the system. 
    For example, if the total data required for the system fits on a single machine, we might not need to go into sharding and the complications that 
    go with a  distributed system design OR 
  - if the most frequently used data fits on a single machine, in which case caching could be done on a single machine.

- Design Goals ( 1 mins ) 
  
  - Figure out what are the most important goals for the system. 
  - It is possible that there are systems which are latency systems in which case a solution that does not account for it, might lead to bad design.

- Skeleton of the design ( 4 - 5 mins ) 

   - 30-40 mins is not enough time to discuss every single component in detail. 
   - As such, a good strategy is to discuss a very high level with the interviewer and go into a deep dive of components as enquired by the interviewer.

- Deep dive ( 20-30 mins ) 
This is an extension of the previous section.


### Youtube Resources

- [System Design Primer Course](https://www.youtube.com/playlist?list=PLTCrU9sGyburBw9wNOHebv9SjlE4Elv5a)
- [System design](https://www.youtube.com/playlist?list=PLMCXHnjXnTnvo6alSjVkgxV-VH6EPyvoX)


==>> [System Design Template](https://leetcode.com/discuss/career/229177/My-System-Design-Template)



### Books and blogs: 

https://www.amazon.com/System-Design-...

https://www.amazon.com/Designing-Data...

https://www.amazon.com/Solutions-Arch...

https://www.amazon.com/Operating-Syst...

https://www.amazon.com/Fundamentals-S...

- Blog Highscalability: http://highscalability.com/
- Blog Dzone: https://dzone.com/
- Netflix Tech Blog: https://netflixtechblog.com/
- Uber Tech Blog: https://eng.uber.com/
- Grab Tech Blog: https://engineering.grab.com/


### SYSTEM DESIGN ONLINE RESOURCE

Grokking the System Design Interview & Grokking the Advanced System Design Interview courses  @ Educative
 follow the link: https://www.educative.io/engineeringw...


## SYSTEM DESIGN OF FAMOUS APPS AND WEBSITES

- [Whatsapp System Desgin](https://www.youtube.com/watch?v=LsH-t75P544)
- [Instagram Design](https://www.youtube.com/watch?v=QmX2NPkJTKg)
- [TikTok Architechture Design](https://www.youtube.com/watch?v=07BVxmVFDGY)
- [Tinder System Design](https://www.youtube.com/watch?v=tndzLznxq40)
- [System Design of Amazon, Flipkart like E-commerce](https://www.youtube.com/watch?v=2BWr0fsDSs0)
- [Mock Low Level Design Interview](https://www.youtube.com/watch?v=J-4UQ_WpMtc)
- [High Level Design vs Low Level Design](https://www.youtube.com/watch?v=H703ErIrby8)
- [low Level Design of a Fitness App](https://www.youtube.com/watch?v=7-A5NgGrJqY)
- [Mock Low Level Design Interview](https://www.youtube.com/watch?v=cqxowa0JbpI)


### SYSTEM DESIGN BOOKS

- [Web Scalability for Startup Engineers](https://amzn.to/39c55QV)
- [Designing Data Intensive Applications](https://amzn.to/3fxgOLm)
- [Building Microservices](https://amzn.to/2UUPsFi)
[- System Design Interview](https://amzn.to/33gpRev)

### BONUS BOOKS

- Microservice Patterns and Best Practices - https://amzn.to/2JcEWH2
- Domain Driven Design - https://amzn.to/2UUPXza

### PRODUCT DESIGN BOOKS

- [RESTful Web APIs](https://amzn.to/33gpctH)
- [Build APIs You Won't Hate](https://amzn.to/3l1vMKG)

### LOW LEVEL DESIGN BOOKS

- [Clean Architecture](https://amzn.to/3kZ7UqR)
- [Head First Design Patterns](https://amzn.to/36XTqT2)

### BOOKS ON RELEVANT TECHNOLOGIES

- [I Heart Logs](https://amzn.to/39iF6Yp)
- [Kafka: The Definitive Guide](https://amzn.to/3997wUB)
- [Graph Databases](https://amzn.to/2UZE8aQ)
- [Cassandra: The Definitive Guide](https://amzn.to/39e31rB)

### FREE BOOKS

- [Site Reliability at Google](https://sre.google/books/)
- [Distributed Systems for Fun and Profit](http://book.mixu.net/distsys/)
