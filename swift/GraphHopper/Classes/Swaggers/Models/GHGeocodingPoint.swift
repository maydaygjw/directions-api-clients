//
// GHGeocodingPoint.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class GHGeocodingPoint: JSONEncodable {
    /** Latitude */
    public var lat: Double?
    /** Longitude */
    public var lng: Double?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["lat"] = self.lat
        nillableDictionary["lng"] = self.lng
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
