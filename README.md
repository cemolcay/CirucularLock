CirucularLock
=============

fully custumisable lock control with block based callbacks.

Demo
============
![alt tag](https://raw.githubusercontent.com/cemolcay/CirucularLock/master/circular.gif)


Usage
============

-Import the CircularLock.h/.m to your project file

-Them implement init method

    CircularLock *c = [[CircularLock alloc] initWithCenter:self.view.center                               
                                                    radius:50
                                                  duration:1.5
                                               strokeWidth:15
                                                 baseColor:[UIColor greenColor]
                                               strokeColor:[UIColor whiteColor]
                                               lockedImage:[UIImage imageNamed:@"lockedTransparent.png"]
                                             unlockedImage:[UIImage imageNamed:@"unlocked.png"]
                                                  isLocked:NO
                                         didlockedCallback:^{
                                             NSLog(@"locked");
                                         }
                                       didUnlockedCallback:^{
                                           NSLog(@"unlocked");
                                       }];

-Add control to your view
    
    [self.view addSubview:c];
    
-Thats all !
