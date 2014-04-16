#import <Foundation/Foundation.h>

#import <SCInstanceStorage/SessionInfo/MUUploadSettings.h>
#import <SCInstanceStorage/SessionInfo/MUUploadSettings_Legacy.h>
#import <SCInstanceStorage/SessionInfo/MUUploadSettingsRecordState.h>

@interface SCSite : NSObject
<
    MUUploadSettings,
    MUUploadSettingsRecordState,
    MUUploadSettings_Legacy
>

@property ( nonatomic ) NSString* siteProtocol;
@property ( nonatomic ) NSString* siteUrl;
@property ( nonatomic ) NSString* site;


@property ( nonatomic ) NSString* username;
@property ( nonatomic ) NSString* password;
@property ( nonatomic, readonly ) BOOL selectedForBrowse;
@property ( nonatomic, readonly ) BOOL selectedForUpload;

-(id)initWithSiteUrl:(NSString*)siteUrl
                site:(NSString*)site
uploadFolderPathInsideMediaLibrary:(NSString*)uploadFolderPathInsideMediaLibrary
            username:(NSString*)username
            password:(NSString*)password
   selectedForBrowse:(BOOL)selectedForBrowse
   selectedForUpload:(BOOL)selectedForUpload;

-(NSString*)getFolderPathForUpload;

+(instancetype)emptySite;
+(NSString*)siteDefaultValue;
+(NSString*)mediaLibraryDefaultPath;
+(NSString*)mediaLibraryDefaultNameWithSlash:(BOOL)withSlash;

-(NSString*)uploadFolderPathInsideMediaLibrary;
-(void)setUploadFolderPathInsideMediaLibrary:(NSString*)uploadFolderPathInsideMediaLibrary;

@end
