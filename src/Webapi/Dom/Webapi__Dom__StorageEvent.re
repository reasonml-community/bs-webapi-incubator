type t = Dom.storageEvent;

include Webapi__Dom__Event.Impl({ type nonrec t = t; });

[@bs.new] external make : string => t = "StorageEvent";
[@bs.new] external makeWithOptions : (string, Js.t({..})) => t = "StorageEvent";

[@bs.get] external key : t => string = "key";
[@bs.get] external newValue : t => Js.Nullable.t(string) = "newValue";
[@bs.get] external oldValue : t => Js.Nullable.t(string) = "oldValue";
[@bs.get] external storageArea : t => Dom.Storage.t = "storageArea";
[@bs.get] external url : t => string = "url";
