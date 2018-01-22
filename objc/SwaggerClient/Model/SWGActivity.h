#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* GraphHopper Directions API
* You use the GraphHopper Directions API to add route planning, navigation and route optimization to your software. E.g. the Routing API has turn instructions and elevation data and the Route Optimization API solves your logistic problems and supports various constraints like time window and capacity restrictions. Also it is possible to get all distances between all locations with our fast Matrix API.
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol SWGActivity
@end

@interface SWGActivity : SWGObject

/* type of activity [optional]
 */
@property(nonatomic) NSString* type;
/* id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to [optional]
 */
@property(nonatomic) NSString* _id;
/* id that refers to address [optional]
 */
@property(nonatomic) NSString* locationId;
/* arrival time at this activity in ms [optional]
 */
@property(nonatomic) NSNumber* arrTime;
/* end time of and thus departure time at this activity [optional]
 */
@property(nonatomic) NSNumber* endTime;
/* waiting time at this activity in ms [optional]
 */
@property(nonatomic) NSNumber* waitingTime;
/* cumulated distance from start to this activity in m [optional]
 */
@property(nonatomic) NSNumber* distance;
/* driving time of driver in ms [optional]
 */
@property(nonatomic) NSNumber* drivingTime;
/* Array with size/capacity dimensions before this activity [optional]
 */
@property(nonatomic) NSArray<NSNumber*>* loadBefore;
/* Array with size/capacity dimensions after this activity [optional]
 */
@property(nonatomic) NSArray<NSNumber*>* loadAfter;

@end
