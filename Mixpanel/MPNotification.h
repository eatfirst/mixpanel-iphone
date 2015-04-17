#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    MPNotificationTypeFullScreen = 1,
    MPNotificationTypeBrandedDialog,
    MPNotificationTypeSystemDialog,
    MPNotificationTypeRequired,
    MPNotificationTypeNotDefined
} MPNotificationType;

@interface MPNotification : NSObject

extern NSString *const MPNotificationTypeMini;
extern NSString *const MPNotificationTypeTakeover;

@property (nonatomic, readonly) NSUInteger ID;
@property (nonatomic, readonly) NSUInteger messageID;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSURL *imageURL;
@property (nonatomic, strong) NSData *image;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *body;
@property (nonatomic, strong) NSString *callToAction;
@property (nonatomic, strong) NSURL *callToActionURL;
@property (nonatomic, assign) MPNotificationType notificationType;

+ (MPNotification *)notificationWithJSONObject:(NSDictionary *)object;

- (instancetype)init __unavailable;

@end
