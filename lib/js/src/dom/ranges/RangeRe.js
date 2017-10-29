'use strict';

var DomTypesRe$Webapi = require("../DomTypesRe.js");

function compareBoundaryPoint(how, range, self) {
  return DomTypesRe$Webapi.decodeCompareResult(self.compareBoundaryPoints(DomTypesRe$Webapi.encodeCompareHow(how), range));
}

function comparePoint(node, offset, self) {
  return DomTypesRe$Webapi.decodeCompareResult(self.comparePoint(node, offset));
}

exports.compareBoundaryPoint = compareBoundaryPoint;
exports.comparePoint         = comparePoint;
/* No side effect */
