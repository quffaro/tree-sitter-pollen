import XCTest
import SwiftTreeSitter
import TreeSitterPollen

final class TreeSitterPollenTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_pollen())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Pollen grammar")
    }
}
