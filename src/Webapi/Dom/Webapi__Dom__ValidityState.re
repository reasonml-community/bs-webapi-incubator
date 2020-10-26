type t;

[@bs.get] external valueMissing : t => bool = "valueMissing";
[@bs.get] external typeMismatch : t => bool = "typeMismatch";
[@bs.get] external patternMismatch : t => bool = "patternMismatch";
[@bs.get] external tooLong : t => bool = "tooLong";
[@bs.get] external tooShort : t => bool = "tooShort";
[@bs.get] external rangeUnderflow : t => bool = "rangeUnderflow";
[@bs.get] external rangeOverflow : t => bool = "rangeOverflow";
[@bs.get] external stepMismatch : t => bool = "stepMismatch";
[@bs.get] external badInput : t => bool = "badInput";
[@bs.get] external customError : t => bool = "customError";
[@bs.get] external valid : t => bool = "valid";
