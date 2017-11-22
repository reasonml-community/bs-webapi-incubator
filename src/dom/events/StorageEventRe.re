type t = Dom.storageEvent;

include EventRe.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "StorageEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "StorageEvent";

[@bs.get] external key : t => string = "";
[@bs.get] external newValue : t => string = "";
[@bs.get] external oldValue : t => string = "";
[@bs.get] external storageArea : t => Dom.Storage.t = "";
[@bs.get] external url : t => string = "";
