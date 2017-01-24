//
// Address.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class Address: JSONEncodable {
    /** Unique identifier of location */
    public var locationId: String?
    /** longitude */
    public var lon: Double?
    /** latitude */
    public var lat: Double?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["location_id"] = self.locationId
        nillableDictionary["lon"] = self.lon
        nillableDictionary["lat"] = self.lat
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
