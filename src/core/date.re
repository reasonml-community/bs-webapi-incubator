type t;

external make : unit => t = "Date" [@@bs.new];
external makeWithValue : float => t = "Date" [@@bs.new];
external makeWithYearMonth : float => float => t = "Date" [@@bs.new];
external makeWithYearMonthDate : float => float => float => t = "Date" [@@bs.new];
external makeWithYearMonthDateHours : float => float => float => float => t = "Date" [@@bs.new];
external makeWithYearMonthDateHoursMinutes : float => float => float => float => float => t = "Date" [@@bs.new];
external makeWithYearMonthDateHoursMinutesSeconds : float => float => float => float => float => float => t = "Date" [@@bs.new];
external utc : unit => float = "" [@@bs.val "Date.utc"];
external utcWithYearMonth : float => float => t = "" [@@bs.val "Date.utc"];
external utcWithYearMonthDate : float => float => float => t = "" [@@bs.val "Date.utc"];
external utcWithYearMonthDateHours : float => float => float => float => t = "" [@@bs.val "Date.utc"];
external utcWithYearMonthDateHoursMinutes : float => float => float => float => float => t = "" [@@bs.val "Date.utc"];
external utcWithYearMonthDateHoursMinutesSeconds : float => float => float => float => float => float => t = "" [@@bs.val "Date.utc"];
external now : unit => float = "" [@@bs.val "Date.now"];
external parse : string => t = "Date" [@@bs.new];

external getDate : t => float = "" [@@bs.send];
external getDay : t => float = "" [@@bs.send];
external getFullYear : t => float = "" [@@bs.send];
external getHours : t => float = "" [@@bs.send];
external getMilliseconds : t => float = "" [@@bs.send];
external getMinutes : t => float = "" [@@bs.send];
external getMonth : t => float = "" [@@bs.send];
external getSeconds : t => float = "" [@@bs.send];
external getTime : t => float = "" [@@bs.send];
external getTimezoneOffset : t => float = "" [@@bs.send];
external getUTCDate : t => float = "" [@@bs.send];
external getUTCDay : t => float = "" [@@bs.send];
external getUTCFullYear : t => float = "" [@@bs.send];
external getUTCHours : t => float = "" [@@bs.send];
external getUTCMilliseconds : t => float = "" [@@bs.send];
external getUTCMinutes : t => float = "" [@@bs.send];
external getUTCMonth : t => float = "" [@@bs.send];
external getUTCSeconds : t => float = "" [@@bs.send];
external getYear : t => float = "" [@@bs.send]; /* deprecated */

external setDate : t => float => float = "" [@@bs.send];
external setFullYear : t => float => float = "" [@@bs.send];
external setFullYearMonth : t => float => float => float = "setFullYear" [@@bs.send];
external setFullYearMonthDay : t => float => float => float => float = "setFullYear" [@@bs.send];
external setHours : t => float => float = "" [@@bs.send];
external setHoursMinutes : t => float => float => float = "setHours" [@@bs.send];
external setHoursMinutesSeconds : t => float => float => float => float = "setHours" [@@bs.send];
external setHoursMinutesSecondsMilliseconds : t => float => float => float => float => float = "setHours" [@@bs.send];
external setMilliseconds : t => float => float = "" [@@bs.send];
external setMinutes : t => float => float = "" [@@bs.send];
external setMinutesSeconds : t => float => float => float = "setMinutes" [@@bs.send];
external setMinutesSecondsMilliseconds : t => float => float => float => float = "setMinutes" [@@bs.send];
external setMonth : t => float => float = "" [@@bs.send];
external setMonthDay : t => float => float => float = "setMonth" [@@bs.send];
external setSeconds : t => float => float = "" [@@bs.send];
external setSecondsMilliseconds : t => float => float => float = "setSeconds" [@@bs.send];
external setTime : t => float => float = "" [@@bs.send];
external setUTCDate : t => float => float = "" [@@bs.send];
external setUTCFullYear : t => float => float = "" [@@bs.send];
external setUTCFullYearMonth : t => float => float => float = "setUTCFullYear" [@@bs.send];
external setUTCFullYearMonthDay : t => float => float => float => float = "setUTCFullYear" [@@bs.send];
external setUTCHours : t => float => float = "" [@@bs.send];
external setUTCHoursMinutes : t => float => float => float = "setUTCHours" [@@bs.send];
external setUTCHoursMinutesSeconds : t => float => float => float => float = "setUTCHours" [@@bs.send];
external setUTCHoursMinutesSecondsMilliseconds : t => float => float => float => float => float = "setUTCHours" [@@bs.send];
external setUTCMilliseconds : t => float => float = "" [@@bs.send];
external setUTCMinutes : t => float => float = "" [@@bs.send];
external setUTCMinutesSeconds : t => float => float => float = "setUTCMinutes" [@@bs.send];
external setUTCMinutesSecondsMilliseconds : t => float => float => float => float = "setUTCMinutes" [@@bs.send];
external setUTCMonth : t => float => float = "" [@@bs.send];
external setUTCMonthDay : t => float => float => float = "setUTCMonth" [@@bs.send];
external setUTCSeconds : t => float => float = "" [@@bs.send];
external setUTCSecondsMilliseconds : t => float => float => float = "setUTCSeconds" [@@bs.send];
external setUTCTime : t => float => float = "" [@@bs.send];
external setYear : t => float => float = "" [@@bs.send]; /* deprecated */

external toDateString : t => string = "" [@@bs.send];
external toGMTString : t => string = "" [@@bs.send]; /* deprecated */
external toISOString : t => string = "" [@@bs.send];
external toJSON : t => string = "" [@@bs.send];
external toLocaleDateString : t => string = "" [@@bs.send]; /* TODO: has overloads with somewhat poor browser support */
external toLocaleString: t => string = "" [@@bs.send]; /* TODO: has overloads with somewhat poor browser support */
external toLocaleTimeString: t => string = "" [@@bs.send]; /* TODO: has overloads with somewhat poor browser support */
external toString : t => string = "" [@@bs.send];
external toTimeString : t => string = "" [@@bs.send];
external toUTCString : t => string = "" [@@bs.send];

external valueOf : t => float = "" [@@bs.send];
