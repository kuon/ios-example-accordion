#import <UIKit/UIKit.h>

@interface GNViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *data;
    NSInteger expandedRowIndex;
}

@end
