//
// GHResponseInfo.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


/** Additional information for your request */
public class GHResponseInfo: JSONEncodable {
    public var copyrights: [String]?
    public var took: Int32?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["copyrights"] = self.copyrights?.encodeToJSON()
        nillableDictionary["took"] = self.took?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
