type t = Dom.beforeUnloadEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "BeforeUnloadEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "BeforeUnloadEvent";

[@bs.get] external returnValue : t => string = "";
/**
 * returnValue cannot be unset because BS cannot (afaik) bind `delete e['returnValue'];`
 * Setting the value to undefined does not cause expected behavior.
 */
[@bs.set] external setReturnValue: (t, string) => unit = "returnValue";
