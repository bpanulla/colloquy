#import "MVChatRoom.h"
#import "MVChatRoomPrivate.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wstrict-prototypes"
#include <libsilcclient/client.h>
#include <libsilc/silcincludes.h>
#pragma clang diagnostic pop

NS_ASSUME_NONNULL_BEGIN

@class MVSILCChatConnection;

@interface MVSILCChatRoom : MVChatRoom {
	SilcChannelEntry _channelEntry;
}
- (id) initWithChannelEntry:(SilcChannelEntry) channelEntry andConnection:(MVSILCChatConnection *) connection;

- (SilcChannelEntry) _getChannelEntry;

- (void) _setChannelUserMode:(SilcUInt32)SilcMode forUser:(MVChatUser *) user;
- (void) _removeChannelUserMode:(SilcUInt32)SilcMode forUser:(MVChatUser *) user;

- (void) updateWithChannelEntry:(SilcChannelEntry) channelEntry;
@end

NS_ASSUME_NONNULL_END
