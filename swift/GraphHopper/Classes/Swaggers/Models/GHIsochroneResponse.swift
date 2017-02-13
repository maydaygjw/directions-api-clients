//
// GHIsochroneResponse.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class GHIsochroneResponse: JSONEncodable {
    public var polygons: [GHIsochroneResponsePolygon]?
    public var copyrights: [String]?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["polygons"] = self.polygons?.encodeToJSON()
        nillableDictionary["copyrights"] = self.copyrights?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}