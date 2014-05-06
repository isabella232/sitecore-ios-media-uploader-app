#import <MUMigrationTool/MUMigrationStrategy.h>
#import <Foundation/Foundation.h>

@interface MURemoveOldFilesMigrationStrategy : NSObject<MUMigrationStrategy>

/**
 Unsupported initializer.
 
 @return Never happens. Throws ```std::runtime_error()```
 */
-(instancetype)init __attribute__((noreturn, unavailable("Unsupported Initializer")));

/**
 A designated initializer.
 
 @param fileManager A file manager for files lookup.
 @param rootDir A directory to scan for cache files. Typically, it is "Documents".
 
 @return A properly initialized object.
 */
-(instancetype)initWithFileManager:( NSFileManager* )fileManager
                rootCacheDirectory:( NSString* )rootDir __attribute__((nonnull, objc_designated_initializer));

@end
