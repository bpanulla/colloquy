#import "CQDaemonConnection.h"

@interface CQLocalDaemonConnection : CQDaemonConnection {
@private
	NSConnection *_connection;
	BOOL _launchingDaemon;
}
@end
