//
// Activity.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class Activity: JSONEncodable {
    public enum ModelType: String { 
        case Start = "start"
        case End = "end"
        case Service = "service"
        case Pickupshipment = "pickupShipment"
        case Delivershipment = "deliverShipment"
        case Pickup = "pickup"
        case Delivery = "delivery"
        case Break = "break"
    }
    /** type of activity */
    public var type: ModelType?
    /** id referring to the underlying service or shipment, i.e. the shipment or service this activity belongs to */
    public var id: String?
    /** id that refers to address */
    public var locationId: String?
    /** arrival time at this activity in seconds */
    public var arrTime: Int64?
    /** end time of and thus departure time at this activity */
    public var endTime: Int64?
    /** waiting time at this activity in seconds */
    public var waitingTime: Int64?
    /** cumulated distance from start to this activity in m */
    public var distance: Int64?
    /** driving time of driver in seconds */
    public var drivingTime: Int64?
    /** Array with size/capacity dimensions before this activity */
    public var loadBefore: [Int32]?
    /** Array with size/capacity dimensions after this activity */
    public var loadAfter: [Int32]?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["type"] = self.type?.rawValue
        nillableDictionary["id"] = self.id
        nillableDictionary["location_id"] = self.locationId
        nillableDictionary["arr_time"] = self.arrTime?.encodeToJSON()
        nillableDictionary["end_time"] = self.endTime?.encodeToJSON()
        nillableDictionary["waiting_time"] = self.waitingTime?.encodeToJSON()
        nillableDictionary["distance"] = self.distance?.encodeToJSON()
        nillableDictionary["driving_time"] = self.drivingTime?.encodeToJSON()
        nillableDictionary["load_before"] = self.loadBefore?.encodeToJSON()
        nillableDictionary["load_after"] = self.loadAfter?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
